@class NSString, _PASLock;

@interface TRISubjectProvider : NSObject <NSSecureCoding> {
    NSString *_path;
    _PASLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)defaultProviderWithPaths:(id)a0;

- (BOOL)save;
- (void)encodeWithCoder:(id)a0 guardedData:(id)a1;
- (id)initWithPath:(id)a0;
- (void)rotateSubject;
- (void)encodeWithCoder:(id)a0;
- (void)decodeWithCoder:(id)a0 guardedData:(id)a1;
- (id)nextRotationDateAfter:(id)a0;
- (id)subjectWithProjectId:(int)a0;
- (void)setNextRotationDate:(id)a0;
- (void).cxx_destruct;
- (id)subject;
- (BOOL)loadUsingGuardedData:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)nextRotationDate;
- (unsigned long long)numberOfWeeksPerRotation;
- (id)anchorDate;

@end

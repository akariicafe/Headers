@class NSString, _PASLock;

@interface TRISubjectProvider : NSObject <NSSecureCoding> {
    NSString *_path;
    _PASLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)defaultProviderWithPaths:(id)a0;

- (id)nextRotationDateAfter:(id)a0;
- (id)subject;
- (id)initWithPath:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0 guardedData:(id)a1;
- (id)initWithCoder:(id)a0;
- (unsigned long long)numberOfWeeksPerRotation;
- (BOOL)save;
- (BOOL)loadUsingGuardedData:(id)a0;
- (id)subjectWithProjectId:(int)a0;
- (void)rotateSubject;
- (void)decodeWithCoder:(id)a0 guardedData:(id)a1;
- (void)setNextRotationDate:(id)a0;
- (id)anchorDate;
- (void).cxx_destruct;
- (id)nextRotationDate;

@end

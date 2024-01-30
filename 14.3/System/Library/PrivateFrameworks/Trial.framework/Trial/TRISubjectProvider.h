@class NSString, _PASLock;

@interface TRISubjectProvider : NSObject <NSSecureCoding> {
    NSString *_path;
    _PASLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)defaultProviderWithPaths:(id)a0;

- (id)initWithPath:(id)a0;
- (id)subject;
- (void).cxx_destruct;
- (BOOL)save;
- (id)anchorDate;
- (id)nextRotationDate;
- (id)subjectWithProjectId:(int)a0;
- (id)initWithCoder:(id)a0;
- (void)decodeWithCoder:(id)a0 guardedData:(id)a1;
- (void)rotateSubject;
- (void)encodeWithCoder:(id)a0 guardedData:(id)a1;
- (unsigned long long)numberOfWeeksPerRotation;
- (BOOL)loadUsingGuardedData:(id)a0;
- (void)setNextRotationDate:(id)a0;
- (id)nextRotationDateAfter:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

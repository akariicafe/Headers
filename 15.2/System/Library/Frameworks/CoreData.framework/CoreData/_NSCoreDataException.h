@class NSString;

@interface _NSCoreDataException : NSException {
    long long _code;
    NSString *_domain;
}

- (id)initWithName:(id)a0 reason:(id)a1 userInfo:(id)a2;
- (id)errorObjectWithUserInfo:(id)a0;
- (void)dealloc;

@end

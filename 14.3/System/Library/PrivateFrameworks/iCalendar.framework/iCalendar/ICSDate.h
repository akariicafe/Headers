@class NSString;

@interface ICSDate : ICSProperty

@property (retain, nonatomic) NSString *tzid;

- (id)components;
- (id)initWithYear:(long long)a0 month:(long long)a1 day:(long long)a2 hour:(long long)a3 minute:(long long)a4 second:(long long)a5 timeZone:(id)a6;
- (id)initWithYear:(long long)a0 month:(long long)a1 day:(long long)a2 hour:(long long)a3 minute:(long long)a4 second:(long long)a5;
- (BOOL)hasFloatingTimeZone;
- (BOOL)hasTimeComponent;
- (id)initWithYear:(long long)a0 month:(long long)a1 day:(long long)a2;
- (id)description;
- (id)initWithValue:(id)a0;
- (id)parametersToIncludeForChecksumVersion:(int)a0;

@end

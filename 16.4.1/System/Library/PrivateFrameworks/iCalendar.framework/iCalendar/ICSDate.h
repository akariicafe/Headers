@class NSString;

@interface ICSDate : ICSProperty

@property (retain, nonatomic) NSString *tzid;

- (id)components;
- (id)initWithValue:(id)a0;
- (id)description;
- (id)initWithYear:(long long)a0 month:(long long)a1 day:(long long)a2 hour:(long long)a3 minute:(long long)a4 second:(long long)a5 timeZone:(id)a6;
- (BOOL)hasFloatingTimeZone;
- (BOOL)hasTimeComponent;
- (id)initWithYear:(long long)a0 month:(long long)a1 day:(long long)a2;
- (id)initWithYear:(long long)a0 month:(long long)a1 day:(long long)a2 hour:(long long)a3 minute:(long long)a4 second:(long long)a5;
- (id)parametersToIncludeForChecksumVersion:(int)a0;

@end

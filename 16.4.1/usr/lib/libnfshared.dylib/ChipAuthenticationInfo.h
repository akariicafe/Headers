@class NSNumber;

@interface ChipAuthenticationInfo : SecurityInfo

@property long long protocol;
@property long long version;
@property (retain) NSNumber *optionalKeyId;

- (id)description;
- (void).cxx_destruct;

@end

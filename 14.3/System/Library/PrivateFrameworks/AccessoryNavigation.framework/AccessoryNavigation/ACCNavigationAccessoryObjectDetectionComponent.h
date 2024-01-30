@class NSString, NSArray;

@interface ACCNavigationAccessoryObjectDetectionComponent : NSObject

@property unsigned long long identifier;
@property (retain) NSString *name;
@property BOOL isEnabled;
@property (retain) NSArray *supportedTypes;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end

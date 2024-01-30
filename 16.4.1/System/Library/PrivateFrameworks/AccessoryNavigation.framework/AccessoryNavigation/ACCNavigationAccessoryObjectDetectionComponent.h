@class NSString, NSArray;

@interface ACCNavigationAccessoryObjectDetectionComponent : NSObject

@property unsigned long long identifier;
@property (retain) NSString *name;
@property BOOL isEnabled;
@property (retain) NSArray *supportedTypes;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end

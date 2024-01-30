@class NSString, NSError;

@interface PFCloudKitErrorLogEntry : NSObject

@property (readonly, nonatomic) NSString *annotation;
@property (readonly, nonatomic) NSError *error;

- (void)dealloc;
- (id)initWithError:(id)a0 annotation:(id)a1;

@end

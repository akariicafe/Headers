@class NSString;

@interface PFMetadataStateBreadcrumb : NSObject

@property (readonly) double timeInterval;
@property (readonly) unsigned long long threadID;
@property (readonly) unsigned int qualityOfService;
@property (readonly, copy) NSString *message;
@property (readonly, copy) NSString *breadcrumbDescription;

- (id)initWithTimeInterval:(double)a0 message:(id)a1;
- (void).cxx_destruct;

@end

@class NSString;
@protocol SXIssueCoverLayoutAttributesFactory;

@interface SXIssueCoverViewProvider : NSObject <SXIssueCoverViewProvider>

@property (readonly, nonatomic) id<SXIssueCoverLayoutAttributesFactory> layoutOptionsFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

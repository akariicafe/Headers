@class NSString;
@protocol SXDOMObjectProviding;

@interface SXComponentTraitsProvider : NSObject <SXComponentTraitsProvider>

@property (readonly, nonatomic) id<SXDOMObjectProviding> DOMObjectProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDOMObjectProvider:(id)a0;
- (unsigned long long)traitsForComponent:(id)a0;

@end

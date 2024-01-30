@class NSString;

@interface SXComponentBookmark : NSObject <SXBookmark>

@property (readonly, copy, nonatomic) NSString *componentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithComponentIdentifier:(id)a0;

@end

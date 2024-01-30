@class NSString;

@interface SXComponentAnchor : NSObject <SXComponentAnchor>

@property (nonatomic) long long targetAnchorPosition;
@property (nonatomic) long long originAnchorPosition;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) NSString *targetComponentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTargetComponentIdentifier:(id)a0;

@end

@interface OAVWriteClient : NSObject

- (void)updateClientAnchorFromOrientedBoundsForDrawable:(id)a0 state:(id)a1;
- (void)writeClientDataFromDrawable:(id)a0 toStyle:(id)a1 state:(id)a2;
- (void)writeClientDataFromDrawable:(id)a0 toXmlWriter:(id)a1 state:(id)a2;
- (id)textWrapPointsForDrawable:(id)a0 state:(id)a1;

@end

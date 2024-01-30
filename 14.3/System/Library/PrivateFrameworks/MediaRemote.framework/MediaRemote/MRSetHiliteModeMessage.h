@interface MRSetHiliteModeMessage : MRProtocolMessage

@property (readonly, nonatomic) BOOL hiliteMode;

- (unsigned long long)type;
- (id)initWithHiliteMode:(BOOL)a0;

@end

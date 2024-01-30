@interface MRSetHiliteModeMessage : MRProtocolMessage

@property (readonly, nonatomic) BOOL hiliteMode;

- (id)initWithHiliteMode:(BOOL)a0;
- (unsigned long long)type;

@end

@class NSString;

@interface BKSContextRelativePoint : NSObject <BSXPCSecureCoding>

@property (readonly, nonatomic) struct CGPoint { double x; double y; } point;
@property (readonly, nonatomic) unsigned int contextID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithPoint:(struct CGPoint { double x0; double x1; })a0 contextID:(unsigned int)a1;

@end

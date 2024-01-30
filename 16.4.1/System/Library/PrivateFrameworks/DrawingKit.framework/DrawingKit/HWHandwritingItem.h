@class NSUUID, DKDrawing, NSDate;

@interface HWHandwritingItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSUUID *uuid;
@property (retain) NSDate *creationDate;
@property (retain) DKDrawing *drawing;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDrawing:(id)a0;

@end

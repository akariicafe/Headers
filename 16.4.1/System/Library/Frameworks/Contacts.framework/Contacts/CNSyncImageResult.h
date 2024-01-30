@class NSData;

@interface CNSyncImageResult : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (readonly, nonatomic) NSData *imageHash;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 imageData:(id)a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 imageHash:(id)a3;

@end

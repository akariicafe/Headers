@interface TSDInstantAlphaBinaryBitmap : NSObject

@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) long long rowBytes;
@property (readonly, nonatomic) long long height;
@property (readonly, nonatomic) char *data;

- (void)dealloc;
- (id)initWithWidth:(long long)a0 height:(long long)a1;
- (void)unionWithBitmap:(id)a0;
- (id)initWithWidth:(long long)a0 height:(long long)a1 rowBytes:(long long)a2;
- (id)medianBitmap;

@end

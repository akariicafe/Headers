@class NSDictionary, NSString;

@interface PKTray : NSObject

@property (retain) NSDictionary *trayDict;
@property (readonly) BOOL isEmpty;
@property (readonly) NSString *name;
@property (readonly) NSString *localizedName;

+ (id)traysWithAttrs:(struct _ipp_s { } *)a0;
+ (id)filter:(id)a0 withBlock:(id /* block */)a1;
+ (id)trayWithString:(id)a0 andMediaSource:(id)a1;

- (BOOL)isEmpty;
- (void)dealloc;
- (id)description;
- (id)name;
- (id)mediaName;
- (id)initWithString:(id)a0 andMediaSource:(id)a1;

@end

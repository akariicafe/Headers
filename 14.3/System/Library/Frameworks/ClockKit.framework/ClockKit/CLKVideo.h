@class NSURL, NSString, CLKDevice;

@interface CLKVideo : NSObject <NSCopying> {
    CLKDevice *_device;
    NSURL *_url;
}

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *name;

+ (id)videoNamed:(id)a0 forDevice:(id)a1 inBundle:(id)a2;
+ (id)videoWithName:(id)a0 forDevice:(id)a1 url:(id)a2;
+ (id)videoNamed:(id)a0 forDevice:(id)a1;
+ (id)_videoNamed:(id)a0 device:(id)a1 bundle:(id)a2 modifier:(id)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)url;
- (id)description;
- (id)initWithName:(id)a0 forDevice:(id)a1 url:(id)a2;

@end

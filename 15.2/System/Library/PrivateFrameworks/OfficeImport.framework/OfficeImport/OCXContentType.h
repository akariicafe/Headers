@class NSString;

@interface OCXContentType : NSObject {
    NSString *mExtension;
}

@property (readonly, nonatomic) NSString *contentType;
@property (readonly, nonatomic) NSString *path;

- (void).cxx_destruct;
- (BOOL)isOverride;
- (void)writeToStreamWriter:(id)a0;
- (id)initWithContentType:(id)a0 path:(id)a1;
- (id)initWithContentType:(id)a0 extension:(id)a1;

@end

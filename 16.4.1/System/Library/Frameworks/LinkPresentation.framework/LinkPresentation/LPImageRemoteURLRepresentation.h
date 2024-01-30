@class NSURL;

@interface LPImageRemoteURLRepresentation : NSObject

@property (readonly, nonatomic) unsigned long long scale;
@property (readonly, retain, nonatomic) NSURL *URL;

- (void).cxx_destruct;
- (id)initWithScale:(unsigned long long)a0 URL:(id)a1;

@end

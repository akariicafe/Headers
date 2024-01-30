@class NSString;

@interface RMMediaSessionStatus : NSObject {
    struct { double machAbsTimestamp; } _internal;
}

@property (readonly, copy) NSString *shortDescription;

- (id)initWithInternal:(const struct { double x0; } *)a0;

@end

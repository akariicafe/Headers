@class NSNumber, NSString, SidecarDevice;

@interface SidecarDisplayConfig : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SidecarDevice *device;
@property (retain, nonatomic) NSNumber *cipher;
@property (retain, nonatomic) NSNumber *codec;
@property (retain, nonatomic) NSNumber *displayID;
@property (retain, nonatomic) NSNumber *configureDisplayExclusiveMode;
@property (retain, nonatomic) NSNumber *enableTimeSync;
@property (retain, nonatomic) NSNumber *framerate;
@property (retain, nonatomic) NSNumber *hdr;
@property (retain, nonatomic) NSNumber *keyFrameInterval;
@property (retain, nonatomic) NSNumber *lowLatency;
@property (retain, nonatomic) NSNumber *rtcp;
@property (retain, nonatomic) NSNumber *rtcpTimeoutInterval;
@property (copy, nonatomic) NSString *service;
@property (retain, nonatomic) NSNumber *showTouchBar;
@property (retain, nonatomic) NSNumber *showSideBar;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double scale;
@property (retain, nonatomic) NSNumber *tilesPerFrame;
@property (nonatomic) long long transport;
@property (retain, nonatomic) NSNumber *dataLink;
@property (retain, nonatomic) NSNumber *txMinBitrate;
@property (retain, nonatomic) NSNumber *txMaxBitrate;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end

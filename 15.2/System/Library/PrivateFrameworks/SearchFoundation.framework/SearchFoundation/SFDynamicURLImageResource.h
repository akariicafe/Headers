@class NSString, NSArray, NSDictionary, NSData;

@interface SFDynamicURLImageResource : NSObject <SFDynamicURLImageResource, NSSecureCoding, NSCopying> {
    struct { unsigned char pixelWidth : 1; unsigned char pixelHeight : 1; unsigned char supportsResizing : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double pixelWidth;
@property (nonatomic) double pixelHeight;
@property (copy, nonatomic) NSString *formatURL;
@property (nonatomic) BOOL supportsResizing;
@property (copy, nonatomic) NSArray *imageOptions;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasPixelWidth;
- (BOOL)hasPixelHeight;
- (BOOL)hasSupportsResizing;
- (id)_sf_urlForSettings:(id)a0 shouldResize:(BOOL)a1 width:(double)a2 height:(double)a3;
- (id)_sf_replacementStringForPropertyEntryKey:(id)a0 value:(id)a1;
- (id)sf_urlForSettings:(id)a0;
- (id)sf_urlForSettings:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

@end

@class NSMutableDictionary;

@interface GEOClientRequestInfo : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_requests;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

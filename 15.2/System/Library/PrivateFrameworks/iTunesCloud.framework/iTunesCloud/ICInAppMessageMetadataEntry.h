@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ICInAppMessageMetadataEntry : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_metadataValues;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)setMetadataValue:(id)a0 forKey:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)metadataValueForKey:(id)a0;
- (id)allMetadataValues;

@end

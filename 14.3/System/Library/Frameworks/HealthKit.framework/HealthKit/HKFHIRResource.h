@class NSString, HKFHIRVersion, NSDate, NSData, NSURL;

@interface HKFHIRResource : NSObject <NSSecureCoding, NSCopying> {
    HKFHIRVersion *_FHIRVersion;
    NSString *_resourceType;
    NSString *_identifier;
    NSData *_data;
    NSURL *_sourceURL;
    NSDate *_lastUpdatedDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *sourceString;
@property (readonly, copy) NSDate *lastUpdatedDate;
@property (readonly, copy) HKFHIRVersion *FHIRVersion;
@property (readonly, copy) NSString *resourceType;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSData *data;
@property (readonly, copy) NSURL *sourceURL;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithResourceType:(id)a0 identifier:(id)a1 FHIRVersion:(id)a2 data:(id)a3 sourceURL:(id)a4 lastUpdatedDate:(id)a5;
- (void)encodeWithCoder:(id)a0;

@end

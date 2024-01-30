@class NSString, NSDictionary, NSURL, NSData;

@interface SFUserActivityInfo : NSObject <SFUserActivityInfo, NSSecureCoding, NSCopying> {
    struct { unsigned char valueType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int valueType;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *stringValue;
@property (copy, nonatomic) NSURL *urlValue;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasValueType;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

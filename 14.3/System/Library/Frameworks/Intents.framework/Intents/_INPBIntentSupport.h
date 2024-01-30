@class NSArray, NSString;

@interface _INPBIntentSupport : PBCodable <_INPBIntentSupport, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *intentsRestrictedWhileLockeds;
@property (readonly, nonatomic) unsigned long long intentsRestrictedWhileLockedsCount;
@property (copy, nonatomic) NSArray *intentsSupporteds;
@property (readonly, nonatomic) unsigned long long intentsSupportedsCount;
@property (copy, nonatomic) NSArray *supportedMediaCategories;
@property (readonly, nonatomic) unsigned long long supportedMediaCategoriesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)intentsRestrictedWhileLockedType;
+ (Class)intentsSupportedType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearIntentsRestrictedWhileLockeds;
- (void)addIntentsRestrictedWhileLocked:(id)a0;
- (id)intentsRestrictedWhileLockedAtIndex:(unsigned long long)a0;
- (void)clearIntentsSupporteds;
- (void)addIntentsSupported:(id)a0;
- (id)intentsSupportedAtIndex:(unsigned long long)a0;
- (void)clearSupportedMediaCategories;
- (void)addSupportedMediaCategories:(id)a0;
- (id)supportedMediaCategoriesAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end

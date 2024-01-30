@class NSArray, NSNumber, NSString;

@interface SSTonePurchase : SSPurchase <SSXPCCoding, NSSecureCoding, NSCopying> {
    NSArray *_allowedToneStyles;
    NSNumber *_assigneeIdentifier;
    NSString *_assigneeContactIdentifier;
    NSString *_assigneeToneStyle;
    BOOL _shouldMakeDefaultRingtone;
    BOOL _shouldMakeDefaultTextTone;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSArray *allowedToneStyles;
@property (retain) NSNumber *assigneeIdentifier;
@property (retain) NSString *assigneeContactIdentifier;
@property (copy) NSString *assigneeToneStyle;
@property BOOL shouldMakeDefaultRingtone;
@property BOOL shouldMakeDefaultTextTone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setValuesUsingDatabaseEncoding:(id)a0;
- (void)_addEntriesToDatabaseEncoding:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithItem:(id)a0 offer:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end

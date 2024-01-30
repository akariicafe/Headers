@class NSString, HDSQLitePredicate;

@interface HDDataExternalSyncIdentifierEntityPredicate : HDSQLitePredicate <HDMetadataPredicate> {
    HDSQLitePredicate *_valuePredicate;
    BOOL _matchObjectsWithoutKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicateWithMetadataKey:(id)a0 exists:(BOOL)a1;
+ (id)predicateWithMetadataKey:(id)a0 value:(id)a1 operatorType:(unsigned long long)a2;
+ (id)predicateWithMetadataKey:(id)a0 allowedValues:(id)a1;

@end

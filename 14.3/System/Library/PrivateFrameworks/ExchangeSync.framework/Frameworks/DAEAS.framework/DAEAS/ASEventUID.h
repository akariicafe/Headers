@class NSString, NSDate;

@interface ASEventUID : NSObject <ASParsingLeafNode, NSCopying> {
    NSDate *_exceptionDate;
    NSString *_uidWithoutExceptionDate;
    BOOL _isOutlookCreatedUid;
}

+ (BOOL)expectsContent;
+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (int)parsingState;
- (id)initWithASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 lengthUntilEndOfTerminator:(int)a5;
- (id)uidForCalFramework;
- (id)recurrenceIDForResponseEmail;
- (id)initWithCalFrameworkString:(id)a0;
- (id)_uidStringBySettingExceptionDateInOutlookUUIDString:(id)a0 withTimeZone:(id)a1;
- (id)uidFromGlobalObjId:(id)a0 outIsOutlookCreatedUid:(BOOL *)a1;
- (id)initWithGlobalObjectIdString:(id)a0;
- (id)initWithUidString:(id)a0;
- (id)uidForResponseEmailWithTimeZone:(id)a0;
- (id)uidWithoutExceptionDate;
- (id)uidForActiveSyncWithTimeZone:(id)a0;
- (id)exceptionDate;
- (void)setExceptionDate:(id)a0;

@end

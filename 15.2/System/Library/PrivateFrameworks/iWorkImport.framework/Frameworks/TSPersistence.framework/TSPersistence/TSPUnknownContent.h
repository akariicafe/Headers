@class NSArray;

@interface TSPUnknownContent : NSObject {
    NSArray *_preserveMessages;
    NSArray *_preserveUntilModifiedMessages;
    NSArray *_preserveFields;
    NSArray *_preserveUntilModifiedFields;
}

+ (BOOL)unknownContent:(id)a0 hasSameUnknownFieldsAsUnknownContent:(id)a1 messagePrototype:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a2;

- (void).cxx_destruct;
- (id)init;
- (void)loadFromUnarchiver:(id)a0;
- (void)willModifyObject;
- (id)newUnknownContentSnapshot;
- (id)initWithMessages:(id)a0 messagesAreDiffs:(BOOL)a1 preserveFields:(id)a2 preserveUntilModifiedFields:(id)a3;
- (BOOL)hasSameUnknownFieldsAsUnknownContent:(id)a0 messagePrototype:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a1;

@end

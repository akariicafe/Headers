@interface CopresenceCore.ChangeHistoryProcessor : NSObject <CNChangeHistoryEventVisitor> {
    void /* unknown type, empty encoding */ onContactDeleted;
}

- (void)visitUpdateContactEvent:(id)a0;
- (void)visitDeleteContactEvent:(id)a0;
- (void)visitAddContactEvent:(id)a0;
- (id)init;
- (void)visitDropEverythingEvent:(id)a0;
- (void).cxx_destruct;

@end

@class TKSmartCardSlot, NSHashTable;

@interface TKSmartCardSlotProxy : NSObject <TKProtocolSmartCardSlotNotification> {
    TKSmartCardSlot *_slot;
}

@property (readonly) NSHashTable *cards;

- (id)initWithSlot:(id)a0;
- (void).cxx_destruct;
- (void)notifyWithParameters:(id)a0;
- (void)cardSessionRequested;

@end

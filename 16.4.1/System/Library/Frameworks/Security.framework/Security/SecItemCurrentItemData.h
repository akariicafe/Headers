@class NSData, NSDate;

@interface SecItemCurrentItemData : NSObject

@property (retain) NSData *persistentRef;
@property (retain) NSDate *currentItemPointerModificationTime;

- (id)initWithPersistentRef:(id)a0;
- (void).cxx_destruct;

@end

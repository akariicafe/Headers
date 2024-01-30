@class NSString, NSNumber;

@interface ICASDeletedNoteData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *deletedNoteCount;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithDeletedNoteCount:(id)a0;

@end

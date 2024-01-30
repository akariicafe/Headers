@class NSString, NSAttributedString, NSArray;

@interface BlastDoorMessage : NSObject {
    void /* unknown type, empty encoding */ message;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *plainTextBody;
@property (nonatomic, readonly) NSString *plainTextSubject;
@property (nonatomic, readonly) NSAttributedString *content;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;
@property (nonatomic, readonly) NSArray *attributionInfo;

- (void).cxx_destruct;
- (id)init;

@end

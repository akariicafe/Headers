@class NSString, NSAttributedString, NSArray;

@interface BlastDoorAudioMessage : NSObject {
    void /* unknown type, empty encoding */ audioMessage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSAttributedString *content;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;
@property (nonatomic, readonly) NSArray *inlineAudioMessages;

- (void).cxx_destruct;
- (id)init;

@end

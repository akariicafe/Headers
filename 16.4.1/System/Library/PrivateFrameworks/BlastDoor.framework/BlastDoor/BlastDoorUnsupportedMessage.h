@class NSString, NSArray;

@interface BlastDoorUnsupportedMessage : NSObject {
    void /* unknown type, empty encoding */ unsupportedMessage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;

- (id)init;
- (void).cxx_destruct;

@end

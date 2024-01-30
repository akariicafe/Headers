@class NSDictionary, MRPlayerPath, NSDate;

@interface MRSendCommandMessage : MRProtocolMessage {
    NSDictionary *_options;
}

@property (readonly, nonatomic) unsigned int command;
@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) NSDate *serializationDate;
@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) unsigned int appOptions;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithCommand:(unsigned int)a0 options:(id)a1 playerPath:(id)a2;

@end

@class NSMutableData;

@interface CKDProtobufResponseBodyParser : CKDResponseBodyParser

@property (retain, nonatomic) NSMutableData *tailParserData;
@property (nonatomic) unsigned long long curObjectLength;
@property (nonatomic) BOOL isParsing;
@property (retain, nonatomic) Class messageClass;
@property (nonatomic) BOOL parsingStandaloneMessage;

- (BOOL)_parseObjectFromData:(id)a0 rawData:(id)a1;
- (BOOL)_parseObjects:(BOOL)a0;
- (void)finishWithCompletion:(id /* block */)a0;
- (void)processData:(id)a0;
- (id)initWithQoS:(long long)a0;
- (void).cxx_destruct;

@end

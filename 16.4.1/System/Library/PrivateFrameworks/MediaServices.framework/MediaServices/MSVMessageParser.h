@class NSMutableData;
@protocol MSVMessageParserDelegate;

@interface MSVMessageParser : NSObject

@property (retain, nonatomic) NSMutableData *unhandledPartialObjectData;
@property (nonatomic) long long unhandledObjectDataExpectedLength;
@property (retain, nonatomic) NSMutableData *unhandledPartialData;
@property (weak, nonatomic) id<MSVMessageParserDelegate> delegate;

+ (id)createHeader:(unsigned long long)a0;

- (void)processData:(id)a0;
- (void).cxx_destruct;
- (void)_notifyDelegate:(id)a0;

@end

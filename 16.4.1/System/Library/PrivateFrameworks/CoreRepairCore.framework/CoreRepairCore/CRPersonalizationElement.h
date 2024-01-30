@class NSString;

@interface CRPersonalizationElement : NSObject

@property (copy, nonatomic) NSString *elementId;
@property (retain, nonatomic) id param;
@property (copy, nonatomic) id /* block */ personalizationMeasurementCreator;
@property (copy, nonatomic) id /* block */ personalizationResponseParser;
@property (retain, nonatomic) id data;

- (id)init;
- (void).cxx_destruct;
- (id)initWithID:(id)a0 param:(id)a1 requestFunction:(id /* block */)a2 responseFunction:(id /* block */)a3;

@end

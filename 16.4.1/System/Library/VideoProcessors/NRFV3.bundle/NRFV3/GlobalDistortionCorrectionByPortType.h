@class NSMutableDictionary;

@interface GlobalDistortionCorrectionByPortType : NSObject {
    NSMutableDictionary *_gdcByPortType;
}

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)getParamsForPortType:(id)a0;

@end

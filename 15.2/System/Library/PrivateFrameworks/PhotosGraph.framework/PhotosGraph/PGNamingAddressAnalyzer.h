@class NSString, PGGraphNamingProcessor;

@interface PGNamingAddressAnalyzer : NSObject <PGNamingAnalyzer> {
    PGGraphNamingProcessor *_processor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)name;
- (id)initWithNamingProcessor:(id)a0;
- (void)runAnalysisWithProgressBlock:(id /* block */)a0;
- (void)findAddressMatchesFromHomeAddressesByContactIdentifier:(id)a0 momentNodesByAddressNode:(id)a1 withProgressBlock:(id /* block */)a2;

@end

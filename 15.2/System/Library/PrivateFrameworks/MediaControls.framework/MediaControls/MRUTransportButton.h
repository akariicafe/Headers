@class NSString, MPCPlayerCommandRequest;

@interface MRUTransportButton : MRUButton

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) MPCPlayerCommandRequest *touchUpInsideCommandRequest;
@property (retain, nonatomic) MPCPlayerCommandRequest *holdBeginCommandRequest;
@property (retain, nonatomic) MPCPlayerCommandRequest *holdEndCommandRequest;
@property (nonatomic) BOOL shouldPresentActionSheet;

- (void).cxx_destruct;
- (void)prepareForReuse;

@end

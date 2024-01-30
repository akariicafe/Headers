@class ICMedia;

@interface ICMultipeerMediaRequest : ICMultipeerResourceRequest

@property (retain) ICMedia *media;

- (id)description;
- (void)startRequest;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)note;
- (unsigned long long)hash;

@end

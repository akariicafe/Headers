@class ICMedia;

@interface ICMultipeerMediaRequest : ICMultipeerResourceRequest

@property (retain) ICMedia *media;

- (void)startRequest;
- (id)note;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end

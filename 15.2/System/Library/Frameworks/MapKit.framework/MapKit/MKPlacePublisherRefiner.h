@class MKMapItemIdentifier;
@protocol MKMapServicePublisherViewTicket;

@interface MKPlacePublisherRefiner : NSObject {
    MKMapItemIdentifier *_publisherIdentifier;
    id<MKMapServicePublisherViewTicket> _ticket;
}

- (void)fetchWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (id)initWithPublisherIdentifier:(unsigned long long)a0 providerIdentifier:(int)a1;
- (id)initWithPublisherIdentifier:(unsigned long long)a0;
- (void).cxx_destruct;

@end
